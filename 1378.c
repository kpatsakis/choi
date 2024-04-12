void fun()
{
  int entity_2 = 98;
  int entity_3 = 65;
  int entity_5 = 97;
  char entity_4[entity_5] = "";
  entity_4 = NULL;
  char entity_1[46] = "";
  entity_1 = NULL;
  char* entity_8;
  memset(entity_1, 'f', 46-1);
  entity_1[46-1]='';
  memset(entity_4, 'F', entity_5-1);
  entity_4[entity_5-1]='';
  entity_8 = (char*)malloc(20*sizeof(char));
  entity_8[20-1]='';
  entity_5 = 96;
  memcpy(entity_8, entity_4, entity_5*sizeof(char));
}