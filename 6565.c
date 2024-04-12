void fun()
{
  int entity_5 = 98;
  char* entity_2;
  char entity_3[11] = "";
  entity_3 = NULL;
  memset(entity_3, 'v', 11-1);
  entity_3[11-1]='';
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  memcpy(entity_2, entity_3, 11*sizeof(char));
}