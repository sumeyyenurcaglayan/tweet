#include  "storage.h"

/*bool storage::isStopWord(string word)const {

	bool found = false;

	switch (word[0])
	{
	case 'a':
		if (word == "a" || word == "able" || word == "about" || word == "above" || word == "abroad" || word == "according" ||
			word == "accordingly" || word == "across" || word == "actually" || word == "adj" || word == "after" || word == "afterwards" ||
			word == "again" || word == "against" || word == "ago" || word == "ahead" || word == "ain't" || word == "all" ||
			word == "allow" || word == "allows" || word == "almost" || word == "alone" || word == "along" || word == "alongside" ||
			word == "already" || word == "also" || word == "although" || word == "always" || word == "am" || word == "amid" ||
			word == "amidst" || word == "among" || word == "amongst" || word == "an" || word == "and" || word == "another" ||
			word == "any" || word == "anybody" || word == "anyhow" || word == "anyone" || word == "anything" || word == "anyway" ||
			word == "anyways" || word == "anywhere" || word == "apart" || word == "appear" || word == "appreciate" || word == "appropriate" ||
			word == "are" || word == "aren't" || word == "around" || word == "as" || word == "a's" || word == "aside" ||
			word == "ask" || word == "asking" || word == "associated" || word == "at" || word == "available" || word == "away" || word == "awfully") {
			found = true;
			break;
		}
	case 'b':
		if (word == "b" || word == "back" || word == "backward" || word == "backwards" || word == "be" || word == "became" ||
			word == "because" || word == "become" || word == "becomes" || word == "becoming" || word == "been" || word == "before" ||
			word == "beforehand" || word == "begin" || word == "behind" || word == "being" || word == "believe" || word == "below" ||
			word == "beside" || word == "besides" || word == "best" || word == "better" || word == "between" || word == "beyond" ||
			word == "both" || word == "brief" || word == "but" || word == "by") {
			found = true;
			break;
		}

	case 'c':
		if (word == "c" || word == "came" || word == "can" || word == "cannot" || word == "cant" || word == "can't" ||
			word == "caption" || word == "cause" || word == "causes" || word == "certain" || word == "certainly" || word == "changes" ||
			word == "clearly" || word == "c'mon" || word == "co" || word == "co." || word == "com" || word == "come" || word == "comes" ||
			word == "concerning" || word == "consequently" || word == "consider" || word == "considering" || word == "contain" || word == "containing" ||
			word == "contains" || word == "corresponding" || word == "could" || word == "couldn't" || word == "course" || word == "c's" ||
			word == "currently") {
			found = true;
			break;
		}

	case 'd':
		if (word == "d" || word == "dare" || word == "daren" || word == "definitely" || word == "described" ||
			word == "despite" || word == "did" || word == "didn't" || word == "different" || word == "directly" || word == "do" ||
			word == "does" || word == "doesn" || word == "doing" || word == "done" || word == "don't" || word == "down" ||
			word == "downwards" || word == "during") {
			found = true;
			break;
		}
	case 'e':
		if (word == "e" || word == "each" || word == "edu" || word == "eg" ||
			word == "eight" || word == "eighty" || word == "either" || word == "else" || word == "elsewhere" || word == "end" ||
			word == "ending" || word == "enough" || word == "entirely" || word == "especially" || word == "et" || word == "etc" ||
			word == "even" || word == "ever" || word == "evermore" || word == "every" || word == "everybody" || word == "everyone" ||
			word == "everything" || word == "everywhere" || word == "ex" || word == "exactly" || word == "example" || word == "except") {
			found = true;
			break;
		}
	case 'f':
		if (word == "f" || word == "fairly" || word == "far" || word == "farther" || word == "few" || word == "fewer" ||
			word == "fifth" || word == "first" || word == "five" || word == "followed" || word == "following" || word == "follows" ||
			word == "for" || word == "forever" || word == "former" || word == "formerly" || word == "forth" || word == "forward" ||
			word == "found" || word == "four" || word == "from" || word == "further" || word == "furthermore"
			) {
			found = true;
			break;
		}
	case 'g':
		if (word == "g" || word == "get" || word == "gets" || word == "getting" || word == "given" || word == "gives" ||
			word == "go" || word == "goes" || word == "going" || word == "gone" || word == "got" || word == "gotten" ||
			word == "greetings") {
			found = true;
			break;
		}
	case 'h':
		if (word == "h" || word == "had" || word == "hadn" || word == "half" || word == "happens" ||
			word == "hardly" || word == "has" || word == "hasn" || word == "have" || word == "haven't" || word == "having" ||
			word == "he" || word == "he'd" || word == "he'll" || word == "hello" || word == "help" || word == "hence" ||
			word == "her" || word == "here" || word == "hereafter" || word == "hereby" || word == "herein" || word == "here's" ||
			word == "hereupon" || word == "hers" || word == "herself" || word == "he's" || word == "hi" || word == "him" ||
			word == "himself" || word == "his" || word == "hither" || word == "hopefully" || word == "how" || word == "howbeit" ||
			word == "however" || word == "hundred") {
			found = true;
			break;
		}
	case 'i':
		if (word == "i" || word == "i'd" || word == "ie" || word == "if" || word == "im" ||
			word == "ignored" || word == "i'll" || word == "i'm" || word == "immediate" || word == "in" || word == "inasmuch" ||
			word == "inc" || word == "inc." || word == "indeed" || word == "indicate" || word == "indicated" || word == "indicates" ||
			word == "inner" || word == "inside" || word == "insofar" || word == "instead" || word == "into" || word == "inward" ||
			word == "is" || word == "isn" || word == "it" || word == "it'd" || word == "it'll" || word == "its" ||
			word == "it's" || word == "itself" || word == "i've") {
			found = true;
			break;
		}
	case 'j':
		if (word == "just" || word == "j") {
			found = true;
			break;
		}
	case 'k':
		if (word == "k" || word == "keep" || word == "keeps" || word == "kept" || word == "know" || word == "known" || word == "knows") {
			found = true;
			break;
		}

	case 'l':
		if (word == "l" || word == "last" || word == "lately" || word == "later" || word == "latter" || word == "latterly" ||
			word == "least" || word == "less" || word == "lest" || word == "let" || word == "let's" || word == "like" ||
			word == "liked" || word == "likely" || word == "likewise" || word == "little" || word == "look" || word == "looking" ||
			word == "looks" || word == "low" || word == "lower" || word == "ltd") {
			found = true;
			break;
		}

	case 'm':
		if (word == "m" || word == "made" || word == "mainly" || word == "make" || word == "makes" || word == "many" ||
			word == "may" || word == "maybe" || word == "mayn" || word == "me" || word == "mean" || word == "meantime" ||
			word == "meanwhile" || word == "merely" || word == "might" || word == "mightn" || word == "mine" || word == "minus" ||
			word == "miss" || word == "more" || word == "moreover" || word == "most" || word == "mostly" || word == "mr" ||
			word == "mrs" || word == "much" || word == "must" || word == "mustn't" || word == "my" || word == "myself") {
			found = true;
			break;
		}

	case 'n':
		if (word == "n" || word == "name" || word == "namely" || word == "nd" || word == "near" || word == "nearly" ||
			word == "necessary" || word == "need" || word == "needn" || word == "needs" || word == "neither" || word == "never" ||
			word == "neverf" || word == "neverless" || word == "nevertheless" || word == "new" || word == "next" || word == "nine" ||
			word == "ninety" || word == "no" || word == "nobody" || word == "non" || word == "none" || word == "nonetheless" ||
			word == "noone" || word == "no-one" || word == "nor" || word == "normally" || word == "not" || word == "nothing" ||
			word == "notwithstanding" || word == "novel" || word == "now" || word == "nowhere") {
			found = true;
			break;
		}

	case 'o':
		if (word == "o" || word == "obviously" || word == "of" || word == "off" || word == "often" || word == "oh" || word == "ok" ||
			word == "okay" || word == "old" || word == "on" || word == "once" || word == "one" || word == "ones" ||
			word == "one's" || word == "only" || word == "onto" || word == "opposite" || word == "or" || word == "other" ||
			word == "others" || word == "otherwise" || word == "ought" || word == "oughtn" || word == "our" || word == "ours" ||
			word == "ourselves" || word == "out" || word == "outside" || word == "over" || word == "overall" || word == "own") {
			found = true;
			break;
		}

	case 'p':
		if (word == "particular" || word == "particularly" || word == "past" || word == "per" || word == "perhaps" || word == "placed" ||
			word == "please" || word == "plus" || word == "possible" || word == "presumably" || word == "probably" || word == "provided" ||
			word == "provides") {
			found = true;
			break;
		}

	case 'q':
		if (word == "q" || word == "que" || word == "quite" || word == "qv") {
			found = true;
			break;
		}

	case 'r':
		if (word == "r" || word == "rather" || word == "rd" || word == "re" || word == "really" || word == "reasonably" ||
			word == "recent" || word == "recently" || word == "regarding" || word == "regardless" || word == "regards" || word == "relatively" ||
			word == "respectively" || word == "right" || word == "round") {
			found = true;
			break;
		}

	case 's':
		if (word == "s" || word == "said" || word == "same" ||
			word == "saw" || word == "say" || word == "saying" || word == "says" || word == "second" || word == "secondly" ||
			word == "see" || word == "seeing" || word == "seem" || word == "seemed" || word == "seeming" || word == "seems" ||
			word == "seen" || word == "self" || word == "sensible" || word == "selves" || word == "sent" || word == "serious" ||
			word == "seriously" || word == "seven" || word == "several" || word == "shall" || word == "shan't" || word == "she" ||
			word == "she'd" || word == "she'll" || word == "she's" || word == "should" || word == "shouldn't" || word == "since" ||
			word == "six" || word == "so" || word == "some" || word == "somebody" || word == "someday" || word == "somehow" ||
			word == "someone" || word == "something" || word == "sometime" || word == "sometimes" || word == "somewhat" || word == "somewhere" ||
			word == "soon" || word == "sorry" || word == "specified" || word == "specify" || word == "specifying" || word == "still" ||
			word == "sub" || word == "such" || word == "sup" || word == "sure") {
			found = true;
			break;
		}

	case 't':
		if (word == "t" || word == "take" || word == "taken" || word == "taking" || word == "tell" || word == "tends" || word == "th" ||
			word == "than" || word == "thank" || word == "thanks" || word == "thanx" || word == "that" || word == "that'll" ||
			word == "thats" || word == "that's" || word == "that've" || word == "the" || word == "their" || word == "theirs" ||
			word == "them" || word == "themselves" || word == "then" || word == "thence" || word == "there" || word == "thereafter" ||
			word == "thereby" || word == "there'd" || word == "therefore" || word == "therein" || word == "there'll" || word == "there're" ||
			word == "theres" || word == "there's" || word == "thereupon" || word == "there've" || word == "these" || word == "they" ||
			word == "they'd" || word == "they'll" || word == "they're" || word == "they've" || word == "thing" || word == "things" ||
			word == "think" || word == "third" || word == "thirty" || word == "this" || word == "thorough" || word == "thoroughly" ||
			word == "those" || word == "though" || word == "three" || word == "through" || word == "throughout" || word == "thru" ||
			word == "thus" || word == "till" || word == "to" || word == "together" || word == "too" || word == "took" ||
			word == "toward" || word == "towards" || word == "tried" || word == "tries" || word == "truly" || word == "try" ||
			word == "trying" || word == "t's" || word == "twice" || word == "two") {
			found = true;
			break;
		}
	case 'u':
		if (word == "u" || word == "un" || word == "under" || word == "underneath" || word == "undoing" || word == "unfortunately" ||
			word == "unless" || word == "unlike" || word == "unlikely" || word == "until" || word == "unto" || word == "up" ||
			word == "upon" || word == "upwards" || word == "us" || word == "use" || word == "used" || word == "useful" ||
			word == "uses" || word == "using" || word == "usually") {
			found = true;
			break;
		}
	case 'v':
		if (word == "v" || word == "value" || word == "various" ||
			word == "versus" || word == "very" || word == "via" || word == "viz" || word == "vs") {
			found = true;
			break;
		}


	case 'w':
		if (word == "want" || word == "was" || word == "wasn" || word == "way" || word == "we" || word == "we'd" ||
			word == "welcome" || word == "well" || word == "we'll" || word == "went" || word == "were" || word == "we're" ||
			word == "weren" || word == "we've" || word == "what" || word == "whatever" || word == "what'll" || word == "what's" ||
			word == "what've" || word == "when" || word == "whence" || word == "whenever" || word == "where" || word == "whereafter" ||
			word == "whereas" || word == "whereby" || word == "wherein" || word == "where's" || word == "whereupon" || word == "wherever" ||
			word == "whether" || word == "which" || word == "whichever" || word == "while" || word == "whilst" || word == "whither" ||
			word == "who" || word == "who'd" || word == "whoever" || word == "whole" || word == "who'll" || word == "whom" ||
			word == "whomever" || word == "who's" || word == "whose" || word == "why" || word == "will" || word == "willing" ||
			word == "wish" || word == "with" || word == "within" || word == "without" || word == "wonder" || word == "won" ||
			word == "would" || word == "wouldn") {
			found = true;
			break;
		}

	case 'x':
		if (word == "x") {
			found = true;
			break;
		}

	case 'y':
		if (word == "y" || word == "yes" || word == "yet" ||
			word == "you" || word == "you'd" || word == "you'll" || word == "your" || word == "you're" || word == "yours" ||
			word == "yourself" || word == "yourselves" || word == "you've") {
			found = true;
			break;
		}

	case 'z':
		if (word == "z" || word == "zero") {
			found = true;
			break;
		}


	default:
		break;
	}


	return found;
}*/

storage::storage(int initialSize) {
	maxSize = initialSize;
	length = 0;
	list = new string[maxSize];

	status = new int[maxSize];
	for (int i = 0; i < maxSize; i++)
		status[i] = 0;
}

bool storage::isFull()
{
	return length == maxSize;
}

void storage::insert(long long int key, string& word) {

	if (isFull()) {
		cout << "Full list..";
		return;
	}

	if (status[key] > 0)
	{
		if (list[key] == word)
			status[key]++;
		else
			insert(key + 1, word);
	}

	else
	{
		list[key] = word;
		status[key] = 1;
		length++;
	}
	
}

/*void storage::printTop(int top)const
{
	string *topList = new string[top + 1];
	int *topNumList = new int[top + 1];

	int maxLocation = 0;
	int largestNum = 0;

	for (int i = 0; i < top + 1; i++)
	{

		for (int j = 0; j < maxSize; j++)
		{
			if (status[j]>largestNum)
			{
				largestNum = status[j];
				maxLocation = j;
			}

		}
		if (isStopWord(list[maxLocation]))
		{
			status[maxLocation] = 0;
			largestNum = 0;
			maxLocation = 0;
			i--;
		}
		else
		{

			topList[i] = list[maxLocation];
			topNumList[i] = largestNum;
			status[maxLocation] = 0;
			largestNum = 0;
			maxLocation = 0;

		}


	}

	for (int i = 0; i < top + 1; i++)
	{
		if (i == 0)
		{
			cout << "  Top " << top << " words used." << endl;
		}
		else { cout << i << "- " << topList[i] << "    Count: " << topNumList[i] << endl; }
	}
	
}*/

int storage::getLength() {
	return length;
}

int storage::getMaxSize() {
	return maxSize;
}

void storage::printTopWithTxtStoppers(int top)const
{
	string *topList = new string[top + 1];
	int *topNumList = new int[top + 1];

	int maxLocation = 0;
	int largestNum = 0;

	for (int i = 0; i < top + 1; i++)
	{

		for (int j = 0; j < maxSize; j++)
		{
			if (status[j]>largestNum)
			{
				largestNum = status[j];
				maxLocation = j;
			}

		}

		if (isStopWordWithTxt(list[maxLocation]))
		{
			status[maxLocation] = 0;
			largestNum = 0;
			maxLocation = 0;
			i--;
		}

		else
		{

			topList[i] = list[maxLocation];
			topNumList[i] = largestNum;
			status[maxLocation] = 0;
			largestNum = 0;
			maxLocation = 0;

		}


	}

	for (int i = 0; i < top + 1; i++)
	{
		if (i == 0)
		{
			cout << "  Top " << top << " words used.\n";
		}
		else { cout << i << "- " << topList[i] << "    Count: " << topNumList[i] << endl; }
	}
	
}

bool storage::isStopWordWithTxt(string word)const
{
	string stopper;
	ifstream stopFile;

	bool found = false;

	stopFile.open("stopwords.txt");

	while (stopFile.good())
	{

		getline(stopFile, stopper);

		if (word == stopper) found = true;
	
	}

	return found;
}

storage::~storage()
{
	delete[]list;
	delete[]status;
}
