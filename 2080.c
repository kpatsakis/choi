void fun()
{
  int entity_7 = 52;
  entity_7 = 34;
  char entity_3[90] = "";
  entity_3 = NULL;
  char* entity_2;
  memset(entity_3, 'v', 90-1);
  entity_3[90-1]='';
  entity_2 = (char*)malloc(entity_7*sizeof(char));
  entity_2[entity_7-1]='';
  memcpy(entity_2, entity_3, 90*sizeof(char));
}