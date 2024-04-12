void fun()
{
  char* entity_2;
  char* entity_1;
  char entity_6[68] = "";
  entity_2 = (char*)malloc(3*sizeof(char));
  entity_2[0]='0';
  entity_1 = (char*)malloc(72*sizeof(char));
  entity_1[0]='0';
  memset(entity_6, 's', 68-1);
  entity_6[68-1]='0';
  memcpy(entity_2, entity_6, 68*sizeof(char));
}