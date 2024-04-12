void fun()
{
  int entity_0 = 84;
  int entity_6 = 38;
  int entity_1 = 66;
  char entity_2[14] = "";
  entity_2 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  memset(entity_2, 'r', 14-1);
  entity_2[14-1]='';
  entity_0 = 96;
  memcpy(entity_7, entity_2, 14*sizeof(char));
}