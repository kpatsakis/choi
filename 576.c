void fun()
{
  int entity_0 = 69;
  int entity_5 = 46;
  char entity_3[90] = "";
  entity_3 = NULL;
  char* entity_1;
  char* entity_6;
  entity_1 = (char*)malloc(98*sizeof(char));
  entity_1[98-1]='';
  memset(entity_3, 'm', 90-1);
  entity_3[90-1]='';
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[entity_0-1]='';
  memcpy(entity_6, entity_3, 90*sizeof(char));
}