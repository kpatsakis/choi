void fun()
{
  char* entity_1;
  char entity_8 = 'A';
  char entity_3[94] = "";
  char* entity_7;
  entity_7 = (char*)malloc(12*sizeof(char));
  entity_7[0]='0';
  entity_1 = (char*)malloc(27*sizeof(char));
  entity_1[0]='0';
  memset(entity_3, 'S', 94-1);
  entity_3[94-1]='0';
  memcpy(entity_1, entity_3, 94*sizeof(char));
}