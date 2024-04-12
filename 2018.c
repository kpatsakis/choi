void fun()
{
  int entity_1 = 26;
  char* entity_2;
  char entity_7 = 'I';
  char entity_0[27] = "";
  entity_0 = NULL;
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  memset(entity_0, 'u', 27-1);
  entity_0[27-1]='';
  memcpy(entity_2, entity_0, 27*sizeof(char));
}