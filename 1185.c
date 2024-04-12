void fun()
{
  int entity_0 = 34;
  entity_0 = 18;
  char* entity_8;
  char* entity_2;
  char entity_6[47] = "";
  entity_6 = NULL;
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  entity_2 = (char*)malloc(86*sizeof(char));
  entity_2[86-1]='';
  memset(entity_6, 'H', 47-1);
  entity_6[47-1]='';
  memcpy(entity_8, entity_6, 47*sizeof(char));
}