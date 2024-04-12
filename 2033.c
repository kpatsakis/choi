void fun()
{
  int entity_0 = 14;
  entity_0 = 3;
  char* entity_3;
  char entity_2[48] = "";
  entity_2 = NULL;
  char entity_9 = 'O';
  memset(entity_2, 'D', 48-1);
  entity_2[48-1]='';
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[entity_0-1]='';
  memcpy(entity_3, entity_2, 48*sizeof(char));
}