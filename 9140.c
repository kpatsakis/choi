void fun()
{
  int entity_3 = 90;
  char entity_2[36] = "";
  entity_2 = NULL;
  char* entity_1;
  char entity_6 = 'l';
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[entity_3-1]='';
  memset(entity_2, 'j', 36-1);
  entity_2[36-1]='';
  entity_3 = 82;
  memcpy(entity_1, entity_2, 36*sizeof(char));
}