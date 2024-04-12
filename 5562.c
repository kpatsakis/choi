void fun()
{
  int entity_6 = 81;
  char entity_2[67] = "";
  entity_2 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[entity_6-1]='';
  memset(entity_2, 'e', 67-1);
  entity_2[67-1]='';
  memcpy(entity_5, entity_2, 67*sizeof(char));
}