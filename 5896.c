void fun()
{
  int entity_2 = 79;
  entity_2 = 25;
  char* entity_4;
  char entity_8[85] = "";
  entity_8 = NULL;
  memset(entity_8, 'I', 85-1);
  entity_8[85-1]='';
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[entity_2-1]='';
  memcpy(entity_4, entity_8, 85*sizeof(char));
}