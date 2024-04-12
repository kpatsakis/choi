void fun()
{
  int entity_5 = 96;
  char* entity_1;
  char entity_3[85] = "";
  entity_3 = NULL;
  char entity_6 = 'v';
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  memset(entity_3, 't', 85-1);
  entity_3[85-1]='';
  memcpy(entity_1, entity_3, 85*sizeof(char));
}