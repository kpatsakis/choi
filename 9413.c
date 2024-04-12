void fun()
{
  int entity_3 = 90;
  entity_3 = 1;
  char* entity_7;
  char entity_5 = 'x';
  char entity_2[70] = "";
  entity_2 = NULL;
  memset(entity_2, 'U', 70-1);
  entity_2[70-1]='';
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[entity_3-1]='';
  memcpy(entity_7, entity_2, 70*sizeof(char));
}