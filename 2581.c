void fun()
{
  int entity_2 = 9;
  char* entity_7;
  char* entity_8;
  char entity_0[7] = "";
  entity_0 = NULL;
  entity_7 = (char*)malloc(11*sizeof(char));
  entity_7[11-1]='';
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[entity_2-1]='';
  memset(entity_0, 'i', 7-1);
  entity_0[7-1]='';
  memcpy(entity_8, entity_0, 7*sizeof(char));
}