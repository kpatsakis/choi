void fun()
{
  int entity_4 = 90;
  entity_4 = 68;
  char* entity_3;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  char entity_0 = 'a';
  char* entity_7;
  entity_3 = (char*)malloc(75*sizeof(char));
  entity_3[75-1]='';
  entity_7 = (char*)malloc(48*sizeof(char));
  entity_7[48-1]='';
  memset(entity_6, 'q', entity_4-1);
  entity_6[entity_4-1]='';
  memcpy(entity_3, entity_6, entity_4*sizeof(char));
}