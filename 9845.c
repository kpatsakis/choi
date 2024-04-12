void fun()
{
  int entity_6 = 74;
  char entity_5[36] = "";
  entity_5 = NULL;
  char entity_0[72] = "";
  entity_0 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  memset(entity_0, 'k', 72-1);
  entity_0[72-1]='';
  memset(entity_5, 'u', 36-1);
  entity_5[36-1]='';
  entity_6 = 90;
  memcpy(entity_3, entity_0, 72*sizeof(char));
}