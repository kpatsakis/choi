void fun()
{
  int entity_8 = 7;
  int entity_3 = 8;
  char entity_7 = 'd';
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  char* entity_6;
  char entity_1[79] = "";
  entity_1 = NULL;
  entity_6 = (char*)malloc(34*sizeof(char));
  entity_6[34-1]='';
  memset(entity_4, 'D', entity_3-1);
  entity_4[entity_3-1]='';
  memset(entity_1, 'b', 79-1);
  entity_1[79-1]='';
  memcpy(entity_6, entity_4, entity_3*sizeof(char));
}