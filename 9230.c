void fun()
{
  int entity_2 = 70;
  entity_2 = 96;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char* entity_3;
  memset(entity_7, 'y', entity_2-1);
  entity_7[entity_2-1]='';
  entity_3 = (char*)malloc(24*sizeof(char));
  entity_3[24-1]='';
  memcpy(entity_3, entity_7, entity_2*sizeof(char));
}