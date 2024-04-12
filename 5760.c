void fun()
{
  int entity_0 = 11;
  entity_0 = 95;
  char entity_7[85] = "";
  entity_7 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_0*sizeof(char));
  entity_2[entity_0-1]='';
  memset(entity_7, 'G', 85-1);
  entity_7[85-1]='';
  memcpy(entity_2, entity_7, 85*sizeof(char));
}