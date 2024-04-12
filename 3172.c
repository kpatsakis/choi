void fun()
{
  int entity_6 = 75;
  entity_6 = 34;
  char entity_3[78] = "";
  entity_3 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[entity_6-1]='';
  memset(entity_3, 'C', 78-1);
  entity_3[78-1]='';
  memcpy(entity_5, entity_3, 78*sizeof(char));
}