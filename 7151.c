void fun()
{
  int entity_0 = 30;
  char* entity_6;
  char* entity_5;
  char entity_4[75] = "";
  entity_4 = NULL;
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[entity_0-1]='';
  memset(entity_4, 'u', 75-1);
  entity_4[75-1]='';
  entity_5 = (char*)malloc(4*sizeof(char));
  entity_5[4-1]='';
  entity_0 = 21;
  memcpy(entity_6, entity_4, 75*sizeof(char));
}