void fun()
{
  int entity_2 = 8;
  entity_2 = 53;
  char* entity_5;
  char* entity_8;
  char entity_6[94] = "";
  entity_6 = NULL;
  memset(entity_6, 'G', 94-1);
  entity_6[94-1]='';
  entity_8 = (char*)malloc(11*sizeof(char));
  entity_8[11-1]='';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  memcpy(entity_5, entity_6, 94*sizeof(char));
}