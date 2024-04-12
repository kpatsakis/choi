void fun()
{
  int entity_4 = 66;
  char entity_7[50] = "";
  entity_7 = NULL;
  char* entity_0;
  char entity_3[38] = "";
  entity_3 = NULL;
  memset(entity_7, 'F', 50-1);
  entity_7[50-1]='';
  memset(entity_3, 'W', 38-1);
  entity_3[38-1]='';
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[entity_4-1]='';
  memcpy(entity_0, entity_3, 38*sizeof(char));
}