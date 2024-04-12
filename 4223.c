void fun()
{
  int entity_8 = 69;
  entity_8 = 11;
  char* entity_7;
  char entity_3[100] = "";
  entity_3 = NULL;
  char entity_1 = 'l';
  memset(entity_3, 'j', 100-1);
  entity_3[100-1]='';
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  memcpy(entity_7, entity_3, 100*sizeof(char));
}