void fun()
{
  int entity_1 = 33;
  char* entity_2;
  char entity_7[40] = "";
  entity_7 = NULL;
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  memset(entity_7, 'q', 40-1);
  entity_7[40-1]='';
  entity_1 = 35;
  memcpy(entity_2, entity_7, 40*sizeof(char));
}