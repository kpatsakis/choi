void fun()
{
  int entity_8 = 26;
  char* entity_5;
  char entity_7[100] = "";
  entity_7 = NULL;
  memset(entity_7, 'i', 100-1);
  entity_7[100-1]='';
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[entity_8-1]='';
  entity_8 = 24;
  memcpy(entity_5, entity_7, 100*sizeof(char));
}