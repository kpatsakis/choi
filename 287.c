void fun()
{
  int entity_4 = 77;
  int entity_7 = 52;
  char* entity_9;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  char* entity_3;
  entity_9 = (char*)malloc(89*sizeof(char));
  entity_9[89-1]='';
  memset(entity_8, 'l', entity_4-1);
  entity_8[entity_4-1]='';
  entity_3 = (char*)malloc(68*sizeof(char));
  entity_3[68-1]='';
  entity_8[77] = 'c';
}