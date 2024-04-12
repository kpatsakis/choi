void fun()
{
  int entity_4 = 90;
  int entity_6 = 100;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  char* entity_3;
  memset(entity_2, 'w', entity_6-1);
  entity_2[entity_6-1]='';
  entity_3 = (char*)malloc(64*sizeof(char));
  entity_3[64-1]='';
  memcpy(entity_3, entity_2, entity_6*sizeof(char));
}