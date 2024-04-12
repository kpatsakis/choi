void fun()
{
  int entity_2 = 69;
  entity_2 = 22;
  char entity_1[85] = "";
  entity_1 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_2*sizeof(char));
  entity_3[entity_2-1]='';
  memset(entity_1, 'j', 85-1);
  entity_1[85-1]='';
  memcpy(entity_3, entity_1, 85*sizeof(char));
}