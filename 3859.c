void fun()
{
  int entity_1 = 41;
  char* entity_2;
  char entity_3[40] = "";
  entity_3 = NULL;
  memset(entity_3, 'e', 40-1);
  entity_3[40-1]='';
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  memcpy(entity_2, entity_3, 40*sizeof(char));
}