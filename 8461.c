void fun()
{
  int entity_4 = 69;
  char entity_5[27] = "";
  entity_5 = NULL;
  char entity_2[11] = "";
  entity_2 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[entity_4-1]='';
  memset(entity_5, 'd', 27-1);
  entity_5[27-1]='';
  memset(entity_2, 'o', 11-1);
  entity_2[11-1]='';
  memcpy(entity_8, entity_5, 27*sizeof(char));
}