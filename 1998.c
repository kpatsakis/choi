void fun()
{
  int entity_0 = 89;
  char* entity_7;
  char entity_5[99] = "";
  entity_5 = NULL;
  char entity_2 = 'D';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  memset(entity_5, 'D', 99-1);
  entity_5[99-1]='';
  entity_0 = 66;
  memcpy(entity_7, entity_5, 99*sizeof(char));
}