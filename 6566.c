void fun()
{
  int entity_0 = 16;
  entity_0 = 84;
  char entity_5[entity_0] = "";
  entity_5 = NULL;
  char* entity_4;
  char* entity_6;
  entity_4 = (char*)malloc(50*sizeof(char));
  entity_4[50-1]='';
  memset(entity_5, 'C', entity_0-1);
  entity_5[entity_0-1]='';
  entity_6 = (char*)malloc(82*sizeof(char));
  entity_6[82-1]='';
  memcpy(entity_4, entity_5, entity_0*sizeof(char));
}