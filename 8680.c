void fun()
{
  int entity_4 = 3;
  char entity_5[entity_4] = "";
  entity_5 = NULL;
  char* entity_0;
  char entity_3[22] = "";
  entity_3 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(68*sizeof(char));
  entity_6[68-1]='';
  memset(entity_5, 'E', entity_4-1);
  entity_5[entity_4-1]='';
  memset(entity_3, 'h', 22-1);
  entity_3[22-1]='';
  entity_0 = (char*)malloc(84*sizeof(char));
  entity_0[84-1]='';
  memcpy(entity_6, entity_5, entity_4*sizeof(char));
}