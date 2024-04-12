void fun()
{
  int entity_8 = 20;
  char* entity_2;
  char entity_9 = 'G';
  char* entity_6;
  char entity_1[80] = "";
  entity_1 = NULL;
  entity_2 = (char*)malloc(13*sizeof(char));
  entity_2[13-1]='';
  memset(entity_1, 'Y', 80-1);
  entity_1[80-1]='';
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  strcpy(entity_6, entity_1);
}