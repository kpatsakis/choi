void fun()
{
  char entity_1[63] = "";
  entity_1 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(95*sizeof(char));
  entity_2[95-1]='';
  memset(entity_1, 'M', 63-1);
  entity_1[63-1]='';
  memcpy(entity_2, entity_1, 63*sizeof(char));
}