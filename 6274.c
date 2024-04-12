void fun()
{
  int entity_0 = 14;
  char* entity_7;
  char* entity_6;
  char* entity_2;
  char entity_1[67] = "";
  entity_1 = NULL;
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  entity_2 = (char*)malloc(66*sizeof(char));
  entity_2[66-1]='';
  memset(entity_1, 'e', 67-1);
  entity_1[67-1]='';
  entity_6 = (char*)malloc(80*sizeof(char));
  entity_6[80-1]='';
  strcpy(entity_7, entity_1);
}