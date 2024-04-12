void fun()
{
  int entity_0 = 40;
  int entity_6 = 92;
  char* entity_4;
  char entity_2[24] = "";
  entity_2 = NULL;
  memset(entity_2, 'p', 24-1);
  entity_2[24-1]='';
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[entity_0-1]='';
  entity_0 = 2;
  memcpy(entity_4, entity_2, 24*sizeof(char));
}