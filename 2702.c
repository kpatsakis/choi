void fun()
{
  int entity_6 = 65;
  int entity_8 = 76;
  char* entity_1;
  char* entity_5;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  entity_1 = (char*)malloc(89*sizeof(char));
  entity_1[89-1]='';
  entity_5 = (char*)malloc(30*sizeof(char));
  entity_5[30-1]='';
  memset(entity_4, 'z', entity_6-1);
  entity_4[entity_6-1]='';
  entity_6 = 26;
  memcpy(entity_5, entity_4, entity_6*sizeof(char));
}