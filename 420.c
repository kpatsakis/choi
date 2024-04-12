void fun()
{
  int entity_3 = 40;
  char* entity_6;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  char entity_0[26] = "";
  entity_0 = NULL;
  memset(entity_7, 'c', entity_3-1);
  entity_7[entity_3-1]='';
  entity_6 = (char*)malloc(94*sizeof(char));
  entity_6[94-1]='';
  memset(entity_0, 'u', 26-1);
  entity_0[26-1]='';
  entity_3 = 17;
  memcpy(entity_6, entity_7, entity_3*sizeof(char));
}