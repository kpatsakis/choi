void fun()
{
  int entity_6 = 10;
  char* entity_2;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  memset(entity_7, 'O', entity_6-1);
  entity_7[entity_6-1]='';
  entity_2 = (char*)malloc(2*sizeof(char));
  entity_2[2-1]='';
  memcpy(entity_2, entity_7, entity_6*sizeof(char));
}