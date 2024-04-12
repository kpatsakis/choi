void fun()
{
  int entity_1 = 90;
  char* entity_2;
  char entity_4[87] = "";
  entity_4 = NULL;
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  memset(entity_4, 'L', 87-1);
  entity_4[87-1]='';
  memcpy(entity_2, entity_4, 87*sizeof(char));
}