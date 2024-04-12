void fun()
{
  char entity_6 = 'K';
  char entity_1[15] = "";
  entity_1 = NULL;
  char entity_9[94] = "";
  entity_9 = NULL;
  char* entity_7;
  memset(entity_1, 'b', 15-1);
  entity_1[15-1]='';
  entity_7 = (char*)malloc(20*sizeof(char));
  entity_7[20-1]='';
  memset(entity_9, 'G', 94-1);
  entity_9[94-1]='';
  entity_9[77] = 'K';
}