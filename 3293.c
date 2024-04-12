void fun()
{
  int entity_1 = 77;
  char* entity_7;
  char entity_6[72] = "";
  entity_6 = NULL;
  char entity_3 = 'F';
  memset(entity_6, 'K', 72-1);
  entity_6[72-1]='';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  memcpy(entity_7, entity_6, 72*sizeof(char));
}