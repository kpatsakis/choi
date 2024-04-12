void fun()
{
  int entity_0 = 18;
  char* entity_7;
  char entity_4[85] = "";
  entity_4 = NULL;
  memset(entity_4, 'P', 85-1);
  entity_4[85-1]='';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  entity_0 = 50;
  memcpy(entity_7, entity_4, 85*sizeof(char));
}