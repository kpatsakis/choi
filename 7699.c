void fun()
{
  int entity_3 = 80;
  char entity_6[85] = "";
  entity_6 = NULL;
  char* entity_7;
  memset(entity_6, 'n', 85-1);
  entity_6[85-1]='';
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[entity_3-1]='';
  entity_3 = 97;
  memcpy(entity_7, entity_6, 85*sizeof(char));
}