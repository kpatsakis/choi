void fun()
{
  int entity_8 = 96;
  char entity_9 = 'v';
  char entity_4[43] = "";
  entity_4 = NULL;
  char* entity_3;
  char* entity_6;
  entity_6 = (char*)malloc(37*sizeof(char));
  entity_6[37-1]='';
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  memset(entity_4, 'r', 43-1);
  entity_4[43-1]='';
  strcpy(entity_3, entity_4);
}