void fun()
{
  int entity_0 = 45;
  char* entity_1;
  char* entity_9;
  char entity_5 = 'G';
  char entity_7[1] = "";
  entity_7 = NULL;
  memset(entity_7, 'Y', 1-1);
  entity_7[1-1]='';
  entity_1 = (char*)malloc(80*sizeof(char));
  entity_1[80-1]='';
  entity_9 = (char*)malloc(74*sizeof(char));
  entity_9[74-1]='';
  strcpy(entity_1, entity_7);
}