void fun()
{
  int entity_3 = 3;
  int entity_2 = 45;
  char* entity_7;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  entity_7 = (char*)malloc(40*sizeof(char));
  entity_7[40-1]='';
  memset(entity_1, 'G', entity_3-1);
  entity_1[entity_3-1]='';
  entity_3 = 46;
  memcpy(entity_7, entity_1, entity_3*sizeof(char));
}