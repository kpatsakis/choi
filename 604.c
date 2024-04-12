void fun()
{
  int entity_9 = 61;
  char entity_2[10] = "";
  entity_2 = NULL;
  char* entity_3;
  memset(entity_2, 'j', 10-1);
  entity_2[10-1]='';
  entity_3 = (char*)malloc(34*sizeof(char));
  entity_3[34-1]='';
  memcpy(entity_3, entity_2, 10*sizeof(char));
}